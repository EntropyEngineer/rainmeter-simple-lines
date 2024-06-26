function Initialize()
    local index = 1
    local section = {}
    local gsub = string.gsub
    local readFile = io.input(SKIN:ReplaceVariables(SELF:GetOption("TemplateFile"))):read("*all")

    local substitution = SELF:GetOption("Substitution")
    local textSubstitutionValues = SELF:GetOption("TextSubstitutionValues")

    if textSubstitutionValues ~= '' then
        for value in textSubstitutionValues:gmatch("([^,]+)") do
            section[index], index = gsub(readFile, substitution, value), index + 1
        end
    else
        local fromValue = SELF:GetNumberOption("IndexSubstitutionFrom") + 1
        local toValue = SELF:GetNumberOption("IndexSubstitutionTo") + 1

        for i = fromValue, toValue do
            section[index], index = gsub(readFile, substitution, i - 1), index + 1
        end
    end

    local file = io.open(SKIN:ReplaceVariables(SELF:GetOption("WriteFile")), "w")

    file:write(table.concat(section, "\n\n"))
    file:close()
end
